/*
 * SamiVariable.h
 * 
 * 
 */

#ifndef SamiVariable_H_
#define SamiVariable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;
using Tizen::Base::Double;


namespace Swagger {

class SamiVariable: public SamiObject {
public:
    SamiVariable();
    SamiVariable(String* json);
    virtual ~SamiVariable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVariable* fromJson(String* obj);

    
    String* getPName();
    void setPName(String* pName);
    
    String* getPOriginalName();
    void setPOriginalName(String* pOriginalName);
    
    String* getPCategory();
    void setPCategory(String* pCategory);
    
    String* getPUnit();
    void setPUnit(String* pUnit);
    
    String* getPSources();
    void setPSources(String* pSources);
    
    Double* getPMinimumValue();
    void setPMinimumValue(Double* pMinimumValue);
    
    Double* getPMaximumValue();
    void setPMaximumValue(Double* pMaximumValue);
    
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombinationOperation);
    
    Double* getPFillingValue();
    void setPFillingValue(Double* pFillingValue);
    

private:
    String* pName;
    String* pOriginalName;
    String* pCategory;
    String* pUnit;
    String* pSources;
    Double* pMinimumValue;
    Double* pMaximumValue;
    String* pCombinationOperation;
    Double* pFillingValue;
    
};

} /* namespace Swagger */

#endif /* SamiVariable_H_ */
