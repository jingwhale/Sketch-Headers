//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBezierPath.h>

@interface NSBezierPath (NSBezierPath_Various)
+ (id)impliedDashPatternFromDashPattern:(id)arg1 paddingToLength:(unsigned long long)arg2;
+ (id)validDashPatternFromProposedDashPattern:(id)arg1 padIfNeeded:(BOOL)arg2;
+ (double)validDashLengthFromProposedDashLength:(double)arg1;
+ (double)validGapLengthFromProposedGapLength:(double)arg1;
+ (id)bezierPathWithSubPaths:(id)arg1;
+ (id)bezierCurveFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 controlPoint1:(struct CGPoint)arg3 controlPoint2:(struct CGPoint)arg4;
+ (id)bezierPathFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)setDashPattern:(id)arg1;
- (void)clampDashPattern:(double *)arg1 count:(unsigned long long)arg2;
- (void)strokeWithWidth:(double)arg1;
- (void)fillNonZero;
- (void)fillEvenOdd;
- (id)bezierPathWithSquareLineCapStyle;
- (id)bezierPathWithLineWidth:(double)arg1;
- (id)outerPathWithRect:(struct CGRect)arg1;
- (id)insetPathBy:(double)arg1;
- (BOOL)outlinePathWithWidth:(double)arg1 containsPoint:(struct CGPoint)arg2;
- (id)outlinePathWithWidth:(double)arg1;
- (BOOL)containsRect:(struct CGRect)arg1;
- (void)debugWriteToFileNamed:(id)arg1;
- (id)simplifyWithMargin:(long long)arg1;
- (id)simplify;
- (id)subPaths;
- (id)scaleBy:(double)arg1;
@end
