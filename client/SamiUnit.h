/*
 * SamiUnit.h
 * 
 * 
 */

#ifndef SamiUnit_H_
#define SamiUnit_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::DateTime;
using Tizen::Base::Float;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiUnit: public SamiObject {
public:
    SamiUnit();
    SamiUnit(String* json);
    virtual ~SamiUnit();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUnit* fromJson(String* obj);

    
    Integer* getPId();
    void setPId(Integer* pId);
    
    String* getPClientId();
    void setPClientId(String* pClient_id);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPAbbreviatedName();
    void setPAbbreviatedName(String* pAbbreviated_name);
    
    Integer* getPCategoryId();
    void setPCategoryId(Integer* pCategory_id);
    
    Float* getPMinimumValue();
    void setPMinimumValue(Float* pMinimum_value);
    
    Float* getPMaximumValue();
    void setPMaximumValue(Float* pMaximum_value);
    
    Integer* getPUpdated();
    void setPUpdated(Integer* pUpdated);
    
    Integer* getPDefaultUnitId();
    void setPDefaultUnitId(Integer* pDefault_unit_id);
    
    Float* getPMultiply();
    void setPMultiply(Float* pMultiply);
    
    Float* getPAdd();
    void setPAdd(Float* pAdd);
    
    DateTime* getPCreatedAt();
    void setPCreatedAt(DateTime* pCreated_at);
    
    DateTime* getPUpdatedAt();
    void setPUpdatedAt(DateTime* pUpdated_at);
    

private:
    Integer* pId;
    String* pClient_id;
    String* pName;
    String* pAbbreviated_name;
    Integer* pCategory_id;
    Float* pMinimum_value;
    Float* pMaximum_value;
    Integer* pUpdated;
    Integer* pDefault_unit_id;
    Float* pMultiply;
    Float* pAdd;
    DateTime* pCreated_at;
    DateTime* pUpdated_at;
    
};

} /* namespace Swagger */

#endif /* SamiUnit_H_ */
