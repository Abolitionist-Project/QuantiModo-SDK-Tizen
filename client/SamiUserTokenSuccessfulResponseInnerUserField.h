/*
 * SamiUserTokenSuccessfulResponseInnerUserField.h
 * 
 * 
 */

#ifndef SamiUserTokenSuccessfulResponseInnerUserField_H_
#define SamiUserTokenSuccessfulResponseInnerUserField_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUserTokenSuccessfulResponseInnerUserField: public SamiObject {
public:
    SamiUserTokenSuccessfulResponseInnerUserField();
    SamiUserTokenSuccessfulResponseInnerUserField(String* json);
    virtual ~SamiUserTokenSuccessfulResponseInnerUserField();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTokenSuccessfulResponseInnerUserField* fromJson(String* obj);

    Integer* getPId();
    void setPId(Integer* pId);
    String* getPAccessToken();
    void setPAccessToken(String* pAccess_token);

private:
    Integer* pId;
String* pAccess_token;
};

} /* namespace Swagger */

#endif /* SamiUserTokenSuccessfulResponseInnerUserField_H_ */
