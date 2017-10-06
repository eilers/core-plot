#import "CPTDefinitions.h"

@class CPTPlot;
@class CPTTextStyle;

@interface CPTLegendEntry : NSObject<NSCoding>

/// @name Plot Info
/// @{
@property (nonatomic, readwrite, weak) __weak CPTPlot *plot;
@property (nonatomic, readwrite, assign) NSUInteger index;
/// @}

/// @name Formatting
/// @{
@property (nonatomic, readwrite, strong) CPTTextStyle *textStyle;
/// @}

/// @name Layout
/// @{
@property (nonatomic, readwrite, assign) NSUInteger row;
@property (nonatomic, readwrite, assign) NSUInteger column;
@property (nonatomic, readonly) CGSize titleSize;
/// @}

/// @name Drawing
/// @{
-(void)drawTitleInRect:(CGRect)rect inContext:(CGContextRef)context scale:(CGFloat)scale;
/// @}

@end
