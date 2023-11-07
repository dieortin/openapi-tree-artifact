#include "OpenApiQtClient/OAIHttpFileElement.h"

#include <iostream>

int main() {

	OpenAPI::OAIHttpFileElement element;

	element.setMimeType("probando");

	std::cout << element.mime_type.toStdString() << std::endl;
}
