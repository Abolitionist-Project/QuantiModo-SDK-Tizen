#ifndef SamiSourceApi_H_
#define SamiSourceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::String;
#include "SamiInline_response_200_21.h"
using Tizen::Base::Integer;
#include "SamiSource.h"
#include "SamiInline_response_200_22.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSourceApi {
public:
  SamiSourceApi();
  virtual ~SamiSourceApi();

  
  SamiInline_response_200_21* 
  sourcesGetWithCompletion(String* accessToken, String* clientId, String* name, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_21*, SamiError*));
  
  SamiInline_response_200_22* 
  sourcesPostWithCompletion(String* accessToken, SamiSource* body, void (* handler)(SamiInline_response_200_22*, SamiError*));
  
  SamiInline_response_200_22* 
  sourcesIdGetWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_22*, SamiError*));
  
  SamiInline_response_200_2* 
  sourcesIdPutWithCompletion(Integer* _id, String* accessToken, SamiSource* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  sourcesIdDeleteWithCompletion(Integer* _id, String* accessToken, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSourceApi_H_ */
