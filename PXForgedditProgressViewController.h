#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, PXForgedditDeletionType) {
	PXForgedditDeletionTypeOverwrite = 0,
	PXForgedditDeletionTypeDelete = 1,
	PXForgedditDeletionTypePreview = 2
};

@interface PXForgedditProgressViewController : UITableViewController {
	NSMutableArray<NSArray *> *_logs;
	NSMutableArray<NSArray *> *_pushedLogs;
}
@property (nonatomic, strong, readonly) RedditService *redditService;
@property (nonatomic, assign, readonly) PXForgedditDeletionType deletionType;
@property (nonatomic, copy, readonly) NSDate *beforeDate;
- (instancetype)initWithService:(RedditService *)service
	deletionType:(PXForgedditDeletionType)deletionType
	beforeDate:(NSDate *)beforeDate;
@end