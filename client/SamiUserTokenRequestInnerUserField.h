/*
 * SamiUserTokenRequestInnerUserField.h
 * 
 * 
 */

#ifndef SamiUserTokenRequestInnerUserField_H_
#define SamiUserTokenRequestInnerUserField_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;


namespace Swagger {

class SamiUserTokenRequestInnerUserField: public SamiObject {
public:
    SamiUserTokenRequestInnerUserField();
    SamiUserTokenRequestInnerUserField(String* json);
    virtual ~SamiUserTokenRequestInnerUserField();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserTokenRequestInnerUserField* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* p_id);
    

private:
    Integer* p_id;
    
};

} /* namespace Swagger */

#endif /* SamiUserTokenRequestInnerUserField_H_ */
