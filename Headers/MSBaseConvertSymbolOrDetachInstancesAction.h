//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDocumentAction.h"

@interface MSBaseConvertSymbolOrDetachInstancesAction : MSDocumentAction
{
}

- (BOOL)hasDynamicTitle;
- (void)convertSymbolMastersToArtboards:(id)arg1;
- (void)detachOrConvertSymbolInstancesRecursively:(BOOL)arg1;
- (BOOL)containsSymbolMasters:(id)arg1;
- (BOOL)validate;

@end
