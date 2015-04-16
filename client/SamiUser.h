/*
 * SamiUser.h
 * 
 * 
 */

#ifndef SamiUser_H_
#define SamiUser_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;
using Tizen::Base::Boolean;


namespace Swagger {

class SamiUser: public SamiObject {
public:
    SamiUser();
    SamiUser(String* json);
    virtual ~SamiUser();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUser* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    Integer* getPWpId();
    void setPWpId(Integer* pWpId);
    
    String* getPDisplayName();
    void setPDisplayName(String* pDisplayName);
    
    String* getPLoginName();
    void setPLoginName(String* pLoginName);
    
    String* getPEmail();
    void setPEmail(String* pEmail);
    
    String* getPToken();
    void setPToken(String* pToken);
    
    Boolean* getPAdministrator();
    void setPAdministrator(Boolean* pAdministrator);
    

private:
    Integer* pId;
    Integer* pWpId;
    String* pDisplayName;
    String* pLoginName;
    String* pEmail;
    String* pToken;
    Boolean* pAdministrator;
    
};

} /* namespace Swagger */

#endif /* SamiUser_H_ */
