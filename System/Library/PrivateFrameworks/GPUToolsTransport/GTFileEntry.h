//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GTFileEntry : NSObject
{
    NSString *_path;	// 8 = 0x8
    unsigned long long _fileSize;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000d4eb
- (void).cxx_destruct;	// IMP=0x000000000000d4db
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d455
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d3a4
- (id)initWithPath:(id)arg1 fileSize:(unsigned long long)arg2;	// IMP=0x000000000000d32e

@end
