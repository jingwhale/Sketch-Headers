//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSLayerArray, MSModelObject<BCSortable><MSSharedObjectStyling>, MSStyle, NSSet, NSString;

@interface MSShareableObjectUpdater : NSObject
{
    MSLayerArray *_selectedLayers;
    unsigned long long _shareableObjectType;
}

@property(nonatomic) unsigned long long shareableObjectType; // @synthesize shareableObjectType=_shareableObjectType;
@property(retain, nonatomic) MSLayerArray *selectedLayers; // @synthesize selectedLayers=_selectedLayers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *foreignSharedObjects;
@property(readonly, nonatomic) MSStyle *selectedStyle;
@property(readonly, nonatomic) MSModelObject<BCSortable><MSSharedObjectStyling> *shareableObject;
@property(readonly, nonatomic) NSSet *allSharedObjects;
@property(readonly, nonatomic) BOOL hasOutOfSyncStyles;
- (id)init;
- (void)performDetachAction;
@property(readonly, nonatomic) NSString *menuItemTitleForDetachAction;
- (void)performResetAction;
@property(readonly, nonatomic) NSString *menuItemTitleForResetStyleAction;
- (void)performSyncAndOrUnlinkAction;
@property(readonly, nonatomic) NSString *menuItemTitleForUnlinkAndSyncAction;
@property(readonly, nonatomic) NSString *menuItemTitleForUnlinkAction;
@property(readonly, nonatomic) NSString *menuItemTitleForSyncAction;
- (unsigned long long)syncBehaviour;
- (void)performCreateNewStyleAction;
- (id)localObjectContainer;
@property(readonly, nonatomic) NSString *menuItemTitleForCreateNewStyleAction;
- (id)menuItemType;
- (id)menuItemTypeNameForType:(unsigned long long)arg1;

@end
