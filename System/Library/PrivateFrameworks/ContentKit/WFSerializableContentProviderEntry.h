//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFSerializableContentProviderEntry : NSObject
{
    CDUnknownBlockType _serializationBlock;	// 8 = 0x8
    CDUnknownBlockType _deserializationBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b94e
@property(readonly, nonatomic) CDUnknownBlockType deserializationBlock; // @synthesize deserializationBlock=_deserializationBlock;
@property(readonly, nonatomic) CDUnknownBlockType serializationBlock; // @synthesize serializationBlock=_serializationBlock;
- (id)initWithSerializedRepresentationBlock:(CDUnknownBlockType)arg1 deserializationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b872

@end

