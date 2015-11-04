#ifndef SamiCredentialApi_H_
#define SamiCredentialApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_9.h"
using Tizen::Base::String;
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiCredential.h"
#include "SamiInline_response_200_10.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCredentialApi {
public:
  SamiCredentialApi();
  virtual ~SamiCredentialApi();

  
  SamiInline_response_200_9* 
  credentialsGetWithCompletion(Boolean* connectorId, String* attrKey, String* attrValue, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_9*, SamiError*));
  
  SamiInline_response_200_10* 
  credentialsPostWithCompletion(SamiCredential* body, void (* handler)(SamiInline_response_200_10*, SamiError*));
  
  SamiInline_response_200_10* 
  credentialsIdGetWithCompletion(Integer* _id, String* attrKey, void (* handler)(SamiInline_response_200_10*, SamiError*));
  
  SamiInline_response_200_2* 
  credentialsIdPutWithCompletion(Integer* _id, String* attrKey, SamiCredential* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  credentialsIdDeleteWithCompletion(Integer* _id, String* attrKey, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCredentialApi_H_ */
