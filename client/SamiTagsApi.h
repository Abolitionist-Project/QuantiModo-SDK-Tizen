#ifndef SamiTagsApi_H_
#define SamiTagsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCommonResponse.h"
using Tizen::Base::Integer;
#include "SamiUserTag.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiTagsApi {
public:
  SamiTagsApi();
  virtual ~SamiTagsApi();

  SamiCommonResponse* 
  v1UserTagsDeletePostWithCompletion(Integer* taggedVariableId, Integer* tagVariableId, void (* handler)(SamiCommonResponse*, SamiError*));
  SamiCommonResponse* 
  v1UserTagsPostWithCompletion(SamiUserTag* body, String* accessToken, void (* handler)(SamiCommonResponse*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTagsApi_H_ */
