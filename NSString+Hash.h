//
// NSString + Hash.h
//
// Created by Max on 14/11/12.
// Copyright (c) 2017 Max. All rights reserved.
//

#import <Foundation / Foundation.h>

@interface NSString (Hash)

/ **
 * Calculate MD5 hash result
 *
 * Terminal test command:
 * @code
 * md5 -s "string"
 * @endcode
 *
 * <p> Tip: With the advent of the MD5 collision generator, the MD5 algorithm should not be used for any software integrity checking or code signing purposes. <p>
 *
 * @return a 32-character MD5 hash string
 * /
- (NSString *) md5String;

/ **
 * Calculate SHA1 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha1
 * @endcode
 *
 @return a 40 character SHA1 hash string
 * /
- (NSString *) sha1String;

/ **
 * Calculate SHA224 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha224
 * @endcode
 *
 @return a 56-character SHA224 hash string
 * /
- (NSString *) sha224String;

/ **
 * Calculate SHA256 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha256
 * @endcode
 *
 @return a 64-character SHA256 hash string
 * /
- (NSString *) sha256String;

/ **
 * Calculate SHA 384 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha384
 * @endcode
 *
 * @return a 96-character SHA 384 hash string
 * /
- (NSString *) sha384String;

/ **
 * Calculate SHA 512 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha512
 * @endcode
 *
 @return a 128 character SHA 512 hash string
 * /
- (NSString *) sha512String;

#pragma mark - HMAC hash function
/ **
 * Calculate HMAC MD5 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl dgst -md5 -hmac "key"
 * @endcode
 *
 * @return a 32 character HMAC MD5 hash string
 * /
- (NSString *) hmacMD5StringWithKey: (NSString *) key;

/ **
 * Calculate HMAC SHA1 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha1 -hmac "key"
 * @endcode
 *
 @return a 40 character HMAC SHA1 hash string
 * /
- (NSString *) hmacSHA1StringWithKey: (NSString *) key;

/ **
 * Calculate HMAC SHA256 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha256 -hmac "key"
 * @endcode
 *
 * @return a 64-character HMAC SHA256 hash string
 * /
- (NSString *) hmacSHA256StringWithKey: (NSString *) key;

/ **
 * Calculate HMAC SHA512 hash result
 *
 * Terminal test command:
 * @code
 * echo -n "string" | openssl sha -sha512 -hmac "key"
 * @endcode
 *
 * @return a 128 character HMAC SHA512 hash string
 * /
- (NSString *) hmacSHA512StringWithKey: (NSString *) key;

#pragma mark - file hash function

/ **
 * Calculate the file's MD5 hash result
 *
 * Terminal test command:
 * @code
 * md5 file.dat
 * @endcode
 *
 * @return a 32-character MD5 hash string
 * /
- (NSString *) fileMD5Hash;

/ **
 * Calculate the file's SHA1 hash result
 *
 * Terminal test command:
 * @code
 * openssl sha -sha1 file.dat
 * @endcode
 *
 @return a 40 character SHA1 hash string
 * /
- (NSString *) fileSHA1Hash;

/ **
 * Calculate the file's SHA256 hash result
 *
 * Terminal test command:
 * @code
 * openssl sha -sha256 file.dat
 * @endcode
 *
 @return a 64-character SHA256 hash string
 * /
- (NSString *) fileSHA256Hash;

/ **
 * Calculate the file's SHA512 hash result
 *
 * Terminal test command:
 * @code
 * openssl sha -sha512 file.dat
 * @endcode
 *
 @return a 128 character SHA512 hash string
 * /
- (NSString *) fileSHA512Hash;

@end
