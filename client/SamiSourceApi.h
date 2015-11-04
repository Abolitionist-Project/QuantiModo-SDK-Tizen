#ifndef SamiSourceApi_H_
#define SamiSourceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiInline_response_200_13.h"
using Tizen::Base::String;
using Tizen::Base::Integer;
#include "SamiInline_response_200_14.h"
#include "SamiSource.h"
#include "SamiInline_response_200_2.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSourceApi {
public:
  SamiSourceApi();
  virtual ~SamiSourceApi();

  
  SamiInline_response_200_13* 
  sourcesGetWithCompletion(String* clientId, String* name, String* createdAt, String* updatedAt, Integer* limit, Integer* offset, String* sort, void (* handler)(SamiInline_response_200_13*, SamiError*));
  
  SamiInline_response_200_14* 
  sourcesPostWithCompletion(SamiSource* body, void (* handler)(SamiInline_response_200_14*, SamiError*));
  
  SamiInline_response_200_14* 
  sourcesIdGetWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_14*, SamiError*));
  
  SamiInline_response_200_2* 
  sourcesIdPutWithCompletion(Integer* _id, SamiSource* body, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  SamiInline_response_200_2* 
  sourcesIdDeleteWithCompletion(Integer* _id, void (* handler)(SamiInline_response_200_2*, SamiError*));
  
  static String getBasePath() {
    return L"https://app.quantimo.do/api/v2";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSourceApi_H_ */
