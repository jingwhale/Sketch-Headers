//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSShadowRenderer.h"

@class NSString;

@interface MSShadowRendererCG : NSObject <MSShadowRenderer>
{
}

- (void)fillAndStrokeShadow:(id)arg1 path:(id)arg2 cacheObject:(id)arg3 windingRule:(unsigned long long)arg4 options:(id)arg5 strokeType:(long long)arg6 lineWidth:(double)arg7 context:(id)arg8;
- (void)strokeShadow:(id)arg1 path:(id)arg2 cacheObject:(id)arg3 strokeType:(long long)arg4 options:(id)arg5 lineWidth:(double)arg6 context:(id)arg7;
- (void)fillShadow:(id)arg1 path:(id)arg2 cacheObject:(id)arg3 windingRule:(unsigned long long)arg4 spread:(double)arg5 context:(id)arg6;
- (void)clipAndTransformForShadow:(id)arg1 forBounds:(struct CGRect)arg2 context:(id)arg3 inBlock:(CDUnknownBlockType)arg4;
- (void)renderInnerShadow:(id)arg1 path:(id)arg2 windingRule:(unsigned long long)arg3 context:(id)arg4;
- (void)renderShadow:(id)arg1 rect:(struct CGRect)arg2 context:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)renderShadow:(id)arg1 path:(id)arg2 cacheObject:(id)arg3 windingRule:(unsigned long long)arg4 options:(id)arg5 type:(unsigned long long)arg6 strokeType:(long long)arg7 fillShouldClip:(BOOL)arg8 lineWidth:(double)arg9 context:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
