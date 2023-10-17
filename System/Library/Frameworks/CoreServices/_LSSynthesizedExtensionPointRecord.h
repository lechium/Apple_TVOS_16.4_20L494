//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSExtensionPointRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSSynthesizedExtensionPointRecord : LSExtensionPointRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d4a2e
- (void).cxx_destruct;	// IMP=0x00000000000d4ba3
- (id)identifier;	// IMP=0x00000000000d4b8d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d4b37
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d4a90
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d4a36
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x00000000000d4936
- (unsigned int)TCCPolicy;	// IMP=0x00000000000d492b
- (unsigned int)extensionPointType;	// IMP=0x00000000000d4920
- (id)parentAppRecord;	// IMP=0x00000000000d4918
- (id)SDKDictionary;	// IMP=0x00000000000d490e
- (unsigned int)platform;	// IMP=0x00000000000d4904
- (id)version;	// IMP=0x00000000000d48f7
- (id)name;	// IMP=0x00000000000d48e5
- (id)_initWithContext:(struct LSContext *)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData *)arg2 length:(unsigned long long)arg3;	// IMP=0x00000000000d482e
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000d46a3

@end
