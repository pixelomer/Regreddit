#import "PXForgedditProgressViewController.h"

@implementation PXForgedditProgressViewController

- (instancetype)initWithService:(RedditService *)service
	deletionType:(PXForgedditDeletionType)deletionType
	endDate:(NSDate *)endDate
{
	if ((self = [super initWithStyle:UITableViewStylePlain])) {

	}
	return self;
}

- (void)viewDidLoad {
	[super viewDidLoad];
	self.navigationItem.hidesBackButton = YES;
}

@end