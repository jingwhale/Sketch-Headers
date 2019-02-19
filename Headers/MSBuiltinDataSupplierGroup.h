//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSDataSupplierGroup.h"

#import "NSCoding-Protocol.h"

@class NSArray;

@interface MSBuiltinDataSupplierGroup : MSDataSupplierGroup <NSCoding>
{
    NSArray *_encodedIdentifiers;
}

@property(copy, nonatomic) NSArray *encodedIdentifiers; // @synthesize encodedIdentifiers=_encodedIdentifiers;
- (void).cxx_destruct;
- (BOOL)includesEncodedIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *builtinDataSuppliers;
- (id)groupName;
- (id)makeGroupIdentifier;
- (BOOL)postDecodingInitializingWithDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuiltinDataSuppliers:(id)arg1 delegate:(id)arg2;

@end
