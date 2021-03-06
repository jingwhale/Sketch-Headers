//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SketchModel/MSImmutablePage.h>

#import "MSWebExportableRootLayer-Protocol.h"

@class MSArtboardPreset, MSImmutableColor, MSImmutableLayoutGrid, MSImmutableRulerData, MSImmutableSimpleGrid, NSString;

@interface MSImmutablePage (WebExporter) <MSWebExportableRootLayer>
@property(readonly, nonatomic) BOOL containsFixedLayers;
@property(readonly, nonatomic) MSArtboardPreset *preset;
- (struct CGRect)rectInFixedViewportWithRect:(struct CGRect)arg1 fromFixingLayer:(id)arg2;
- (unsigned long long)webExportLayerBehaviorWithRect:(struct CGRect)arg1 fromLayer:(id)arg2;
@property(readonly, nonatomic) BOOL isFlowHome;
@property(readonly, nonatomic) BOOL webExporterShouldIncludeBackgroundColor;
@property(readonly, nonatomic) MSImmutableColor *webExporterBackgoundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) MSImmutableSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) MSImmutableRulerData *horizontalRulerData;
@property(readonly, copy, nonatomic) MSImmutableLayoutGrid *layout;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) MSImmutableRulerData *verticalRulerData;
@end

