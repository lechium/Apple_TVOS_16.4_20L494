//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppPrototypeIdentifier, IKViewElement, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKDSEPrototypeMapping : NSObject
{
    IKAppPrototypeIdentifier *_identifier;	// 8 = 0x8
    IKViewElement *_viewElement;	// 16 = 0x10
    NSIndexSet *_usageIndexes;	// 24 = 0x18
}

+ (id)prototypeMappingFromAppPrototype:(id)arg1 dataSourceElement:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00600000000028fd
- (void).cxx_destruct;	// IMP=0x0000000000002cba
@property(readonly, copy, nonatomic) NSIndexSet *usageIndexes; // @synthesize usageIndexes=_usageIndexes;
@property(readonly, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(readonly, nonatomic) IKAppPrototypeIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 viewElement:(id)arg2 usageIndexes:(id)arg3;	// IMP=0x0000000000002bd2

@end

