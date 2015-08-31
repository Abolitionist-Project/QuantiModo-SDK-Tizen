#include "SamiVariablesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiVariablesApi::SamiVariablesApi() {

}

SamiVariablesApi::~SamiVariablesApi() {

}

void
correlationsPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::correlationsPostWithCompletion(String* cause, String* effect, String* correlationcoefficient, String* vote, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&correlationsPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cause"), cause);
  
  
    queryParams->Add(new String("effect"), effect);
  
  
    queryParams->Add(new String("correlationcoefficient"), correlationcoefficient);
  
  
    queryParams->Add(new String("vote"), vote);
  
  

  String* mBody = null;

  

  String url(L"/correlations");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
publicVariablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::publicVariablesGetWithCompletion( void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&publicVariablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/public/variables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
publicVariablesSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::publicVariablesSearchSearchGetWithCompletion(String* search, String* effectOrCause, Integer* limit, Integer* offset, Integer* sort, void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&publicVariablesSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("effectOrCause"), effectOrCause);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/public/variables/search/{search}");

  
  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));
  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
v1UserVariablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::v1UserVariablesPostWithCompletion(SamiUserVariables* sharingData, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&v1UserVariablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(sharingData != null) {
    mBody = new String(sharingData->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/v1/userVariables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variableCategoriesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiVariableCategory");

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
SamiVariablesApi::variableCategoriesGetWithCompletion( void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variableCategoriesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/variableCategories");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::variablesGetWithCompletion(Integer* userId, String* category, Integer* limit, Integer* offset, Integer* sort, void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("userId"), userId);
  
  
    queryParams->Add(new String("category"), category);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  
    queryParams->Add(new String("sort"), sort);
  
  

  String* mBody = null;

  

  String url(L"/variables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesPostProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiVariablesApi::variablesPostWithCompletion(SamiVariablesNew* variableName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesPostProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  
  
  
  if(variableName != null) {
    mBody = new String(variableName->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }
  
  

  String url(L"/variables");

  

  client->execute(SamiVariablesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
variablesSearchSearchGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiVariable");

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
SamiVariablesApi::variablesSearchSearchGetWithCompletion(String* search, String* categoryName, String* source, Integer* limit, Integer* offset, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesSearchSearchGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("categoryName"), categoryName);
  
  
    queryParams->Add(new String("source"), source);
  
  
    queryParams->Add(new String("limit"), limit);
  
  
    queryParams->Add(new String("offset"), offset);
  
  

  String* mBody = null;

  

  String url(L"/variables/search/{search}");

  
  String s_search(L"{");
  s_search.Append(L"search");
  s_search.Append(L"}");
  url.Replace(s_search, stringify(search, L"String*"));
  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
variablesVariableNameGetProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiVariable* out = new SamiVariable();
    jsonToValue(out, pJson, L"SamiVariable*", L"SamiVariable");

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

SamiVariable* 
SamiVariablesApi::variablesVariableNameGetWithCompletion(String* variableName, void (* success)(SamiVariable*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&variablesVariableNameGetProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  

  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  

  String* mBody = null;

  

  String url(L"/variables/{variableName}");

  
  String s_variableName(L"{");
  s_variableName.Append(L"variableName");
  s_variableName.Append(L"}");
  url.Replace(s_variableName, stringify(variableName, L"String*"));
  

  client->execute(SamiVariablesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
