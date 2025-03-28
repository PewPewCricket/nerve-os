#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

void* memcpy(void *dest, const void *src, size_t n) {
	uint8_t *pdest = (uint8_t *)dest;
	const uint8_t *psrc = (const uint8_t *)src;

	for (size_t i = 0; i < n; i++) {
		pdest[i] = psrc[i];
	}

	return dest;
}

void* memset(void *s, int c, size_t n) {
	uint8_t *p = (uint8_t *)s;

	for (size_t i = 0; i < n; i++) {
		p[i] = (uint8_t)c;
	}

	return s;
}

void* memmove(void *dest, const void *src, size_t n) {
	uint8_t *pdest = (uint8_t *)dest;
	const uint8_t *psrc = (const uint8_t *)src;

	if (src > dest) {
		for (size_t i = 0; i < n; i++) {
			pdest[i] = psrc[i];
		}
	} else if (src < dest) {
		for (size_t i = n; i > 0; i--) {
			pdest[i-1] = psrc[i-1];
		}
	}

	return dest;
}

int memcmp(const void *s1, const void *s2, size_t n) {
	const uint8_t *p1 = (const uint8_t *)s1;
	const uint8_t *p2 = (const uint8_t *)s2;

	for (size_t i = 0; i < n; i++) {
		if (p1[i] != p2[i]) {
			return p1[i] < p2[i] ? -1 : 1;
		}
	}

	return 0;
}

int strlen(const char* s) {
	int len = 0;
	for(;;) {
		if(s[len] == 0) {
			return len;
		}
		len++;
	}
}

int strnlen(const char* s, size_t n) {
	int len = 0;
	for(size_t i = 0; i < n; i++) {
		if(s[len] == 0) {
			return len;
		}
		len++;
	}
	return len;
}

int strcmp(const char* s1, const char* s2) {
	for (size_t i = 0;; i++) {
		if (s1[i] != s2[i]) {
			return s1[i] < s2[i] ? -1 : 1;
		} else if (s1[i] == 0 || s2[i] == 0) {
			return 0;
		}
	}
}

int strncmp(const char* s1, const char* s2, size_t n) {
	for (size_t i = 0; i < n; i++) {
		if (s1[i] != s2[i]) {
			return s1[i] < s2[i] ? -1 : 1;
		} else if (s1[i] == 0 || s2[i] == 0) {
			return 0;
		}
	}
	return 0;
}

char* strcpy(char* dest, const char* s) {
	for (size_t i = 0;; i++) {
		if (s[i] == 0) {
			return dest;
		} else {
			dest[i] = s[i];
		}
	}
}

char* strncpy(char* dest, const char* s, size_t n) {
	for (size_t i = 0; i < n; i++) {
		if (s[i] == 0) {
			return dest;
		} else {
			dest[i] = s[i];
		}
	}
	return dest;
}