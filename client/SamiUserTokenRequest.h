/*
 * SamiUserTokenRequest.h
 * 
 * 
 */

#ifndef SamiUserTokenRequest_H_
#define SamiUserTokenRequest_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiUserTokenRequestInnerUserField.h"
using Tizen::Base::String;


namespace Swagger {

class SamiUserTokenRequest: public SamiObject {
public:
    SamiUserTokenRequest();
    SamiUserTokenRequest(String* json);
    virtual ~SamiUserTokenRequest();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTokenRequest* fromJson(String* obj);

    SamiUserTokenRequestInnerUserField* getPUser();
    void setPUser(SamiUserTokenRequestInnerUserField* pUser);
    String* getPOrganizationAccessToken();
    void setPOrganizationAccessToken(String* pOrganizationAccessToken);

private:
    SamiUserTokenRequestInnerUserField* pUser;
String* pOrganizationAccessToken;
};

} /* namespace Swagger */

#endif /* SamiUserTokenRequest_H_ */
