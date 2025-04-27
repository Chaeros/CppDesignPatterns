#pragma once
#include <string>
#include <map>
#include <ostream>

class HttpRequest {
private:
	std::string method;
	std::string url;
	std::map<std::string, std::string> headers;
	std::map<std::string, std::string> parameters;
	std::string body;
	HttpRequest(
		const std::string& method,
		const std::string& url,
		const std::map<std::string,std::string> headers,
		const std::map<std::string,std::string> parameters,
		const std::string& body);
public:
	friend std::ostream& operator<<(std::ostream& os, const HttpRequest& request);
	friend class HttpReqeustBuilder;
	class HttpRequestBuilder {
	private:
		std::string method;
		std::string url;
		std::map<std::string, std::string> headers;
		std::map<std::string, std::string> parameters;
		std::string body;
	public:
		HttpRequestBuilder(const std::string& method, const std::string& url);
		HttpRequestBuilder& addHeader(const std::string& key, const std::string& value);
		HttpRequestBuilder& addParameter(const std::string&, const std::string& value);
		HttpRequestBuilder& setBody(const std::string& body);
		HttpRequest build() const;
	};
};