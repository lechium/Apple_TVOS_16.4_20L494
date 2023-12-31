//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSAKDeserializer : NSObject
{
    id ds;	// 8 = 0x8
}

- (id)deserializePListValueIn:(id)arg1 key:(id)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000005709d4
- (id)deserializePListKeyIn:(id)arg1;	// IMP=0x00000000005709c2
- (id)deserializePList:(id)arg1;	// IMP=0x000000000057074f
- (id)deserializeNewPList;	// IMP=0x00000000005706fe
- (id)deserializeListItemIn:(id)arg1 at:(unsigned long long)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000005706ec
- (id)deserializeList:(id)arg1;	// IMP=0x000000000057057a
- (id)deserializeNewList;	// IMP=0x0000000000570529
- (id)deserializeString:(id)arg1;	// IMP=0x00000000005704a5
- (id)deserializeNewKeyString;	// IMP=0x0000000000570454
- (id)deserializeNewString;	// IMP=0x0000000000570403
- (id)deserializeData:(id)arg1;	// IMP=0x0000000000570385
- (id)deserializeNewData;	// IMP=0x0000000000570334
- (id)deserializeNewObject;	// IMP=0x00000000005702b8
- (id)deserializerStream;	// IMP=0x00000000005702ae
- (void)dealloc;	// IMP=0x0000000000570250
- (id)initForDeserializerStream:(id)arg1;	// IMP=0x00000000005701e2

@end

