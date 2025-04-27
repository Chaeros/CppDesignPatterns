#include "HttpRequest.h"
#include <string>

HttpRequest::HttpRequest(
    const std::string& method,
    const std::string& url,
    const std::map<std::string, std::string> headers,
    const std::map<std::string, std::string> parameters,
    const std::string& body)
    : method(method),url(url),headers(headers),parameters(parameters),body(body) {}

std::ostream& operator<<(std::ostream& os, const HttpRequest& request) {
    os << "HttpRequest:" << std::endl;
    os << "  Method: " << request.method << std::endl;
    os << "  URL: " << request.url << std::endl;

    os << "  Headers:" << std::endl;
    for (const auto& header : request.headers) {
        os << "    " << header.first << ": " << header.second << std::endl;
    }

    os << "  Parameters:" << std::endl;
    for (const auto& param : request.parameters) {
        os << "    " << param.first << "=" << param.second << std::endl;
    }
    return os;
}

HttpRequest::HttpRequestBuilder::HttpRequestBuilder(const std::string& method, const std::string& url) {
    this->method = method;
    this->url = url;
}

HttpRequest::HttpRequestBuilder& HttpRequest::HttpRequestBuilder::addHeader(const std::string& key, const std::string& value) {
    (this->headers).emplace(key, value);
    return *this;
}

HttpRequest::HttpRequestBuilder& HttpRequest::HttpRequestBuilder::addParameter(const std::string& key, const std::string& value) {
    (this->parameters).emplace(key, value);
    return *this;
}

HttpRequest::HttpRequestBuilder& HttpRequest::HttpRequestBuilder::setBody(const std::string& body) {
    this->body = body;
    return *this;
}

HttpRequest HttpRequest::HttpRequestBuilder::build() const {
    return HttpRequest(method,url,headers,parameters,body);
}