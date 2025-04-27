#include "BuilderOperator.h"
#include "httpRequest/HttpRequest.h"
#include <iostream>

void builderPatternRun() {
    HttpRequest getRequest = HttpRequest::HttpRequestBuilder(
        "GET", "https://www.samsung.com/api/my-image")
        .addHeader("Authorization", "Bearer Token")
        .addParameter("query", "val")
        .build();

	HttpRequest postBuilder = HttpRequest::HttpRequestBuilder(
        "POST","https://www.samsung.com/api/my-info")
        .addHeader("Authorization", "Bearer Token")
        .setBody("{ \"name\": \"chaeros\", \"age\": 30}")
        .build();

    std::cout << getRequest << std::endl;
    std::cout << postBuilder << std::endl;
}