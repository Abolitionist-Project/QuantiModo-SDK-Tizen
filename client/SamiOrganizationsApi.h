#ifndef SamiOrganizationsApi_H_
#define SamiOrganizationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiUserTokenFailedResponse.h"
#include "SamiUserTokenRequest.h"
using Tizen::Base::String;
#include "SamiUserTokenSuccessfulResponse.h"
using Tizen::Base::Integer;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiOrganizationsApi {
public:
  SamiOrganizationsApi();
  virtual ~SamiOrganizationsApi();

  SamiUserTokenSuccessfulResponse* 
  v1OrganizationsOrganizationIdUsersPostWithCompletion(Integer* organizationId, SamiUserTokenRequest* body, String* accessToken, void (* handler)(SamiUserTokenSuccessfulResponse*, SamiError*));
  static String getBasePath() {
    return L"https://app.quantimo.do/api";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiOrganizationsApi_H_ */
