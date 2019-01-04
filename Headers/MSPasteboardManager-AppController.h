//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SketchModel/MSPasteboardManager.h>

@interface MSPasteboardManager (AppController)
+ (void)registerViewForSupportedDraggedTypes:(id)arg1;
+ (void)registerWriter:(id)arg1;
+ (void)registerReader:(id)arg1;
+ (void)writePasteboardLayers:(id)arg1 toPasteboard:(id)arg2;
+ (id)readPasteboardLayersFromDrag:(id)arg1 colorSpace:(id)arg2;
+ (id)readPasteboardLayersFromPasteboard:(id)arg1 colorSpace:(id)arg2 options:(unsigned long long)arg3;
+ (id)applicationPasteboardManager;
- (void)registerDefaultReadersAndWriters;
@end
