#ifndef SamiCredentialApi_H_
#define SamiCredentialApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200_4.h"
using Tizen::Base::Integer;
#include "SamiInline_response_200_19.h"
#include "SamiCredential.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCredentialApi {
public:
  SamiCredentialApi();
  virtual ~SamiCredentialApi();

  
  SamiInline_response_200_4* 
  credentialsGetWithCompletion(String* accessToken, Integer* userId, Integer* connectorId, String* attrKey, String* attrValue, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_4*, SamiError*));
  
  SamiInline_response_200_19* 
  credentialsPostWithCompletion(String* accessToken, SamiCredential* body, void (* handler)(SamiInline_response_200_19*, SamiError*));
  
  SamiInline_response_200_19* 
  credentialsIdGetWithCompletion(Integer* _id, String* attrKey, String* accessToken, void (* handler)(SamiInline_response_200_19*, SamiError*));
  
  SamiInline_response_200_2* 
  credentialsIdPutWithCompletion(Integer* _id, String* attrKey, String* accessToken, SamiCredential* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  credentialsIdDeleteWithCompletion(Integer* _id, String* attrKey, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCredentialApi_H_ */
