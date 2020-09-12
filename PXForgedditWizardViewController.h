#import <UIKit/UIKit.h>
#import "PXForgedditProgressViewController.h"

@interface PXForgedditWizardViewController : UITableViewController {
	UIDatePicker *_datePicker;
	BOOL _didStart;
	PXForgedditDeletionType _selectedType;
}
@property (nonatomic, weak, readonly) RedditService *service;
- (instancetype)initWithService:(RedditService *)service;
@end