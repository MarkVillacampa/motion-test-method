#import <Foundation/Foundation.h>

@interface NTLMAuth : NSObject<NSURLConnectionDelegate> {
}

-(bool)loginToHost:(NSString *)host withUsername:(NSString *)username andPassword:(NSString *)password;

@end
