#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PXForgedditDeletionType) {
	PXForgedditDeletionTypeOverwrite = 0,
	PXForgedditDeletionTypeDelete = 1
};

@interface PXForgedditProgressViewController : UITableViewController
- (instancetype)initWithService:(RedditService *)service
	deletionType:(PXForgedditDeletionType)deletionType
	endDate:(NSDate *)endDate;
@end