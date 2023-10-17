//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSFileHandle.h"

__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle
{
}

- (CDUnknownBlockType)readabilityHandler;	// IMP=0x0000000000416f19
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000416f13
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x0000000000416f0b
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000416f05
- (int)fileDescriptor;	// IMP=0x0000000000416efa
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x0000000000416ef2
- (void)closeFile;	// IMP=0x0000000000416eec
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x0000000000416ee4
- (void)synchronizeFile;	// IMP=0x0000000000416ede
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000416ed6
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x0000000000416ed0
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000416ec8
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x0000000000416ec2
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x0000000000416eae
- (unsigned long long)seekToEndOfFile;	// IMP=0x0000000000416ea6
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x0000000000416e92
- (unsigned long long)offsetInFile;	// IMP=0x0000000000416e8a
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000416e82
- (void)writeData:(id)arg1;	// IMP=0x0000000000416e7c
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x0000000000416e63
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x0000000000416e4a
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x0000000000416e31
- (id)readDataToEndOfFile;	// IMP=0x0000000000416e18
- (id)availableData;	// IMP=0x0000000000416dff

@end

