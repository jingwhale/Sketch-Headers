//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSDataSupplier.h"

@class NSString;

@interface MSPluginDataSupplier : MSDataSupplier
{
    NSString *_pluginIdentifier;
    NSString *_commandIdentifier;
    NSString *_dynamicDataKey;
}

@property(readonly, nonatomic) NSString *dynamicDataKey; // @synthesize dynamicDataKey=_dynamicDataKey;
@property(readonly, nonatomic) NSString *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(readonly, nonatomic) NSString *pluginIdentifier; // @synthesize pluginIdentifier=_pluginIdentifier;
- (void).cxx_destruct;
- (BOOL)valid;
- (id)imageFileURLForDataItem:(id)arg1;
- (void)generateDataWithCount:(unsigned long long)arg1 dataSupplierManager:(id)arg2 dataApplier:(CDUnknownBlockType)arg3;
- (id)feedIdentifier;
- (id)initWithPluginIdentifier:(id)arg1 commandIdentifier:(id)arg2 dataName:(id)arg3 dataTypeStringRepresentation:(id)arg4 dynamicDataKey:(id)arg5;

@end
