/*
 * SamiUnitCategory.h
 * 
 * 
 */

#ifndef SamiUnitCategory_H_
#define SamiUnitCategory_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::String;
using Tizen::Base::Integer;


namespace Swagger {

class SamiUnitCategory: public SamiObject {
public:
    SamiUnitCategory();
    SamiUnitCategory(String* json);
    virtual ~SamiUnitCategory();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUnitCategory* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPName();
    void setPName(String* pName);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    String* pName;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiUnitCategory_H_ */
