#include <WebObjects/WebObjects.h>

@interface ClickDelay:GSWComponent {
  NSDate *startDate;
}

@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, readonly) NSString *delay;

@end
