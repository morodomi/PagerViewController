/**
 * @author dommy <shonan.shachu at gmail.com>
 * @version 1.0.0 updated on 2012-04-28
 */

#import <UIKit/UIKit.h>

@interface PagerViewController : UIViewController <UIScrollViewDelegate>

@property (nonatomic, strong) IBOutlet UIScrollView *scrollView;
@property (nonatomic, strong) IBOutlet UIPageControl *pageControl;

@end
