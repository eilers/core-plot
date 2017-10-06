#import "CPTLayer.h"

@class CPTAxis;

@interface CPTGridLines : CPTLayer

@property (nonatomic, readwrite, weak) __weak CPTAxis *axis;
@property (nonatomic, readwrite) BOOL major;

@end
