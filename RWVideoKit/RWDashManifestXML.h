

#import <Foundation/Foundation.h>
__attribute__((visibility("hidden")))
@interface XCDYouTubeDashManifestXML : NSObject

- (instancetype)initWithXMLString:(NSString *)XMLString;

- (NSDictionary *)streamURLs;

@end
