#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


#import "SWGInlineObject1ManagedObject.h"
#import "SWGInlineObject1.h"

/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* The version of the OpenAPI document: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


@interface SWGInlineObject1ManagedObjectBuilder : NSObject



-(SWGInlineObject1ManagedObject*)createNewSWGInlineObject1ManagedObjectInContext:(NSManagedObjectContext*)context;

-(SWGInlineObject1ManagedObject*)SWGInlineObject1ManagedObjectFromSWGInlineObject1:(SWGInlineObject1*)object context:(NSManagedObjectContext*)context;

-(void)updateSWGInlineObject1ManagedObject:(SWGInlineObject1ManagedObject*)object withSWGInlineObject1:(SWGInlineObject1*)object2;

-(SWGInlineObject1*)SWGInlineObject1FromSWGInlineObject1ManagedObject:(SWGInlineObject1ManagedObject*)obj;

-(void)updateSWGInlineObject1:(SWGInlineObject1*)object withSWGInlineObject1ManagedObject:(SWGInlineObject1ManagedObject*)object2;

@end
