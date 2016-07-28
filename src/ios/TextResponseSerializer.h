#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>

@interface TextResponseSerializer : AFHTTPResponseSerializer

+ (instancetype)serializer:(NSDictionary*)headers;

@end