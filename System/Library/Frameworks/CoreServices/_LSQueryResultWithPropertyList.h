//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQueryResult.h"

__attribute__((visibility("hidden")))
@interface _LSQueryResultWithPropertyList : _LSQueryResult
{
    id _propertyList;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000010b887
- (void).cxx_destruct;	// IMP=0x000000000010ba1a
@property(readonly, retain, nonatomic) id propertyList; // @synthesize propertyList=_propertyList;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b91e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010b88f
- (id)propertyListWithClass:(Class)arg1 valuesOfClass:(Class)arg2;	// IMP=0x000000000010b4f8
- (id)propertyListWithClass:(Class)arg1;	// IMP=0x000000000010b4e4
- (id)initWithPropertyList:(id)arg1;	// IMP=0x000000000010b462

@end

