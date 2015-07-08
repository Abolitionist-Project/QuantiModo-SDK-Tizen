#include "SamiConnectorsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiConnectorsApi::SamiConnectorsApi() {

}

SamiConnectorsApi::~SamiConnectorsApi() {

}

void
connectorsListGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiConnector");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

IList* 
SamiConnectorsApi::connectorsListGetWithCompletion( void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsListGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/connectors/list");

  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
connectorsConnectorConnectGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiConnectorsApi::connectorsConnectorConnectGetWithCompletion(String* connector, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsConnectorConnectGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/connectors/{connector}/connect");

  
  String s_connector(L"{");
  s_connector.Append(L"connector");
  s_connector.Append(L"}");
  url.Replace(s_connector, stringify(connector, L"String*"));
  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
connectorsConnectorConnectInstructionsGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiConnectorsApi::connectorsConnectorConnectInstructionsGetWithCompletion(String* connector, String* url, IList* parameters, Boolean* usePopup, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsConnectorConnectInstructionsGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("url"), url);
  
  
    queryParams->Add(new String("parameters"), parameters);
  
  
    queryParams->Add(new String("usePopup"), usePopup);
  
  

  String* mBody = null;

  

  String url(L"/connectors/{connector}/connectInstructions");

  
  String s_connector(L"{");
  s_connector.Append(L"connector");
  s_connector.Append(L"}");
  url.Replace(s_connector, stringify(connector, L"String*"));
  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
connectorsConnectorConnectParameterGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiConnectorsApi::connectorsConnectorConnectParameterGetWithCompletion(String* connector, String* displayName, String* key, Boolean* usePopup, String* type, String* placeholder, String* defaultValue, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsConnectorConnectParameterGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("displayName"), displayName);
  
  
    queryParams->Add(new String("key"), key);
  
  
    queryParams->Add(new String("usePopup"), usePopup);
  
  
    queryParams->Add(new String("type"), type);
  
  
    queryParams->Add(new String("placeholder"), placeholder);
  
  
    queryParams->Add(new String("defaultValue"), defaultValue);
  
  

  String* mBody = null;

  

  String url(L"/connectors/{connector}/connectParameter");

  
  String s_connector(L"{");
  s_connector.Append(L"connector");
  s_connector.Append(L"}");
  url.Replace(s_connector, stringify(connector, L"String*"));
  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
connectorsConnectorDisconnectGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiConnectorsApi::connectorsConnectorDisconnectGetWithCompletion(String* connector, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsConnectorDisconnectGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/connectors/{connector}/disconnect");

  
  String s_connector(L"{");
  s_connector.Append(L"connector");
  s_connector.Append(L"}");
  url.Replace(s_connector, stringify(connector, L"String*"));
  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
connectorsConnectorInfoGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiConnectorsApi::connectorsConnectorInfoGetWithCompletion(String* connector, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsConnectorInfoGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/connectors/{connector}/info");

  
  String s_connector(L"{");
  s_connector.Append(L"connector");
  s_connector.Append(L"}");
  url.Replace(s_connector, stringify(connector, L"String*"));
  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
connectorsConnectorUpdateGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiConnectorsApi::connectorsConnectorUpdateGetWithCompletion(String* connector, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&connectorsConnectorUpdateGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/connectors/{connector}/update");

  
  String s_connector(L"{");
  s_connector.Append(L"connector");
  s_connector.Append(L"}");
  url.Replace(s_connector, stringify(connector, L"String*"));
  

  client->execute(SamiConnectorsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
