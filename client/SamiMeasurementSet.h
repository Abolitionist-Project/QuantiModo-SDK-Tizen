/*
 * SamiMeasurementSet.h
 * 
 * 
 */

#ifndef SamiMeasurementSet_H_
#define SamiMeasurementSet_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiValueObject.h"
using Tizen::Base::String;
using Tizen::Base::Collection::IList;


namespace Swagger {

class SamiMeasurementSet: public SamiObject {
public:
    SamiMeasurementSet();
    SamiMeasurementSet(String* json);
    virtual ~SamiMeasurementSet();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiMeasurementSet* fromJson(String* obj);

    
    IList* getPMeasurements();
    void setPMeasurements(IList* pMeasurements);
    
    String* getPName();
    void setPName(String* pName);
    
    String* getPSource();
    void setPSource(String* pSource);
    
    String* getPCategory();
    void setPCategory(String* pCategory);
    
    String* getPCombinationOperation();
    void setPCombinationOperation(String* pCombinationOperation);
    
    String* getPUnit();
    void setPUnit(String* pUnit);
    

private:
    IList* pMeasurements;
    String* pName;
    String* pSource;
    String* pCategory;
    String* pCombinationOperation;
    String* pUnit;
    
};

} /* namespace Swagger */

#endif /* SamiMeasurementSet_H_ */
