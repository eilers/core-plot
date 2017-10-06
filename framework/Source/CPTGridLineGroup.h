#import "CPTLayer.h"

@class CPTPlotArea;

@interface CPTGridLineGroup : CPTLayer

@property (nonatomic, readwrite, weak) __weak CPTPlotArea *plotArea;
@property (nonatomic, readwrite) BOOL major;

@end
