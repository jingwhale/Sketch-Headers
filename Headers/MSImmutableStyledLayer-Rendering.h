//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutableStyledLayer.h>

@interface MSImmutableStyledLayer (Rendering)
- (id)strokeStyleForDecoratedPath;
- (id)fillStyleForDecoratedPath;
- (id)fillPathWithDecorations:(id *)arg1;
- (BOOL)shouldSkipDrawingInContext:(id)arg1;
- (BOOL)shouldRenderInTransparencyLayer;
@property(readonly, nonatomic) BOOL shouldRasterize;
- (void)prepareDrawingInContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
@end

