//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor;

@interface MSOverlayColorSettings : NSObject
{
    NSColor *_canvasBackgroundColor;
    NSColor *_pageBackgroundColor;
    NSColor *_pixelGridColor;
    NSColor *_sliceOutlineColor;
    NSColor *_artboardTitleColor;
    NSColor *_symbolTitleColor;
}

+ (id)colorSettings;
@property(retain, nonatomic) NSColor *symbolTitleColor; // @synthesize symbolTitleColor=_symbolTitleColor;
@property(retain, nonatomic) NSColor *artboardTitleColor; // @synthesize artboardTitleColor=_artboardTitleColor;
@property(retain, nonatomic) NSColor *sliceOutlineColor; // @synthesize sliceOutlineColor=_sliceOutlineColor;
@property(retain, nonatomic) NSColor *pixelGridColor; // @synthesize pixelGridColor=_pixelGridColor;
@property(retain, nonatomic) NSColor *pageBackgroundColor; // @synthesize pageBackgroundColor=_pageBackgroundColor;
@property(retain, nonatomic) NSColor *canvasBackgroundColor; // @synthesize canvasBackgroundColor=_canvasBackgroundColor;
- (void).cxx_destruct;

@end
