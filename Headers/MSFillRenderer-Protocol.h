//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSRenderer-Protocol.h"

@class MSImmutableStyleFill, MSImmutableStyledLayer, MSPath, MSRenderingContext;

@protocol MSFillRenderer <MSRenderer>
- (void)renderFill:(MSImmutableStyleFill *)arg1 path:(MSPath *)arg2 layer:(MSImmutableStyledLayer *)arg3 index:(long long)arg4 rect:(struct CGRect)arg5 hasInnerStroke:(BOOL)arg6 context:(MSRenderingContext *)arg7;
@end

