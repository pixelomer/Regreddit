#ifndef __FORGEDDIT_MACROS_H
#define __FORGEDDIT_MACROS_H

#import <UIKit/UIKit.h>

@interface LegacyCredentials : NSObject
- (NSString *)tokenString;
@end

@interface User : NSObject
- (NSString *)displayNamePrefixed;
- (NSString *)pk;
@end

@interface Account : NSObject
- (User *)user;
@end

@interface RedditService : NSObject
- (Account *)account;
- (LegacyCredentials *)credentials;
- (BOOL)isCurrentService;
- (void)createAuthenticatedRequest:(NSURLRequest *)request
	completion:(void(^)(NSURLRequest *authenticatedRequest, NSError *error))completion;
@end

// Real name: "Reddit.RedditAccountContext"
@interface RedditAccountContext : NSObject
- (RedditService *)redditService;
@end

@interface UserDrawerViewController : UIViewController<UITableViewDataSource>
- (RedditAccountContext *)accountContext;
@end

@interface UIImageView(Forgeddit)
@property (nonatomic, assign) BOOL __forgeddit_readonly;
@end

@interface UITableViewLabel : UILabel
@property (nonatomic, assign) BOOL __forgeddit_readonly;
@end

#endif