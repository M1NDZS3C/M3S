echo "\ndeb http://http.kali.org/kali kali main/debian-installer" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org kali Release.gpg " | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://security.kali.org kali/updates Release.gpg" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org kali Release " | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://security.kali.org kali/updates Release" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org/ /kali main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org/ /wheezy main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org/kali kali-dev main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org/kali kali-dev main/debian-installer" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb-src http://http.kali.org/kali kali-dev main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org/kali kali main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://http.kali.org/kali kali main/debian-installer" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb-src http://http.kali.org/kali kali main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb http://security.kali.org/kali-security kali/updates main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null
echo "\ndeb-src http://security.kali.org/kali-security kali/updates main contrib non-free" | tee -a /etc/apt/sources.list > /dev/null

